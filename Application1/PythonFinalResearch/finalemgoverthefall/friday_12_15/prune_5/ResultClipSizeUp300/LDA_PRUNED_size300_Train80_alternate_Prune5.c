// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.56%
// test_accuracy: 78.75%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-12 12:41:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.230513, 1.230529,
    0.394628, -0.394600,
    0.432834, -0.432861,
    1.008338, -1.008328,
    -0.482159, 0.482023,
    0.051543, -0.051432,
    0.110740, -0.110727,
    -0.166051, 0.166051,
    -0.133310, 0.133195,
    0.065117, -0.064846,
    -0.414614, 0.414537,
    -0.147896, 0.147799,
};

float Cg_init[2] = {
    -0.488621, -0.488620
};

float xstd_init[12] = {
    0.004578, 0.001947, 0.139649, 0.196833, 0.001463, 0.000266, 0.036771, 0.097895, 0.000676, 0.000158, 0.028044, 0.103909
};

float xmean_init[12] = {
    0.010915, -0.005592, 0.250865, 0.695259, 0.003603, -0.007721, 0.013630, 0.088000, 0.003549, -0.007731, 0.013432, 0.122074
};

