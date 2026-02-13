// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.61%
// test_accuracy: 54.78%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_30.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_12.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-17 13:46:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.396955, 0.396839,
    0.249750, -0.249462,
    -0.036052, 0.036026,
    -0.118239, 0.118073,
    -0.318641, 0.318722,
    -0.211879, 0.211841,
    -0.144511, 0.144495,
    0.377011, -0.377017,
    -0.574012, 0.574148,
    0.322387, -0.322665,
    0.032782, -0.032703,
    0.090578, -0.090493,
};

float Cg_init[2] = {
    -0.170415, -0.170417
};

float xstd_init[12] = {
    0.001047, 0.000082, 0.012621, 0.080325, 0.003251, 0.000885, 0.094071, 0.188024, 0.000878, 0.000113, 0.019563, 0.076146
};

float xmean_init[12] = {
    0.006566, -0.007683, 0.004774, 0.149054, 0.008533, -0.006858, 0.103973, 0.431867, 0.004340, -0.007714, 0.010776, 0.127264
};

