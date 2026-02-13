// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.94%
// test_accuracy: 87.50%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 16:03:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.649469, 0.649501,
    -0.164641, 0.164636,
    0.545362, -0.545355,
    0.431135, -0.431159,
    1.224771, -1.224835,
    -1.609886, 1.609965,
    0.230951, -0.230979,
    0.034362, -0.034356,
    0.779824, -0.779726,
    -0.534590, 0.534363,
    -0.403023, 0.403078,
    0.628546, -0.628459,
};

float Cg_init[2] = {
    -0.523326, -0.523315
};

float xstd_init[12] = {
    0.003254, 0.001129, 0.093875, 0.156144, 0.001528, 0.000488, 0.025152, 0.075103, 0.000549, 0.000096, 0.016821, 0.065521
};

float xmean_init[12] = {
    0.009662, -0.006309, 0.163333, 0.572083, 0.003156, -0.007720, 0.006111, 0.046875, 0.003122, -0.007807, 0.004306, 0.065417
};

