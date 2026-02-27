// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 51.92%
// test_accuracy: 50.00%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt']}
// generated: 2026-02-13 17:10:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.534741, 0.534743,
    0.170660, -0.170617,
    0.000000, 0.000000,
    -0.402512, -0.402512,
    1.528520, 1.528520,
    0.890548, 0.890548,
    1.788997, 1.788997,
    2.413763, 2.413763,
    -0.218553, -0.218553,
    -0.643997, -0.643997,
    -0.359234, -0.359234,
    -0.533647, -0.533647,
};

float Cg_init[2] = {
    0.673687, -0.919437
};

float xstd_init[12] = {
    0.000268, 0.000016, 1.000000, 0.016501, 0.001915, 0.000660, 0.071052, 0.127411, 0.001824, 0.000545, 0.070236, 0.160103
};

float xmean_init[12] = {
    0.002627, -0.007912, 0.000000, 0.007308, 0.008227, -0.006638, 0.144359, 0.456154, 0.006382, -0.007045, 0.098205, 0.354616
};

