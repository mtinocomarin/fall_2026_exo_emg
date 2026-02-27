// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt']}
// generated: 2026-02-13 17:11:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.591285, 0.591288,
    -1.268528, 1.268468,
    0.000000, 0.000000,
    -0.428174, -0.428174,
    -0.507295, -0.507295,
    -0.565217, -0.565217,
    0.137478, 0.137478,
    0.579685, 0.579685,
    2.677155, 2.677155,
    2.792671, 2.792671,
    0.331133, 0.331133,
    2.275660, 2.275660,
};

float Cg_init[2] = {
    -3.953351, 2.631649
};

float xstd_init[12] = {
    0.000223, 0.000012, 1.000000, 0.017033, 0.002588, 0.000825, 0.063284, 0.133918, 0.001192, 0.000377, 0.059955, 0.144435
};

float xmean_init[12] = {
    0.002736, -0.007917, 0.000000, 0.008571, 0.008915, -0.006279, 0.142857, 0.514286, 0.006461, -0.007084, 0.102857, 0.380000
};

