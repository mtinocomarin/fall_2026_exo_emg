// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.57%
// test_accuracy: 73.03%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_10.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 15:51:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.693437, 0.693408,
    -0.269951, 0.269993,
    0.591998, -0.592009,
    0.537899, -0.537898,
    0.954337, -0.954213,
    -0.852741, 0.852526,
    -0.222163, 0.222247,
    -0.073234, 0.073242,
    0.615990, -0.616008,
    0.041525, -0.041505,
    -0.330810, 0.330809,
    0.020553, -0.020572,
};

float Cg_init[2] = {
    -0.474579, -0.474571
};

float xstd_init[12] = {
    0.003175, 0.001241, 0.101559, 0.165881, 0.001153, 0.000341, 0.018002, 0.065219, 0.000520, 0.000072, 0.014460, 0.059561
};

float xmean_init[12] = {
    0.009469, -0.006330, 0.175567, 0.586603, 0.003004, -0.007779, 0.004370, 0.046220, 0.003079, -0.007816, 0.003509, 0.061771
};

